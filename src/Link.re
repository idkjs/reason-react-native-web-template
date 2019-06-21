open ReactNative;

[@react.component]
let make = (~href: string, ~style=?, ~value: string) => {
  let linkStyle =
    switch (style) {
    | None => Styles.styles##link
    | Some(style) => Style.list([Styles.styles##link, style])
    };
  // let linkStyle = style ?
  // Style.concat([Styles.styles##link, style]) : Styles.styles##link;
  <Text
    onPress={() =>
      Js.Promise.(
        Linking.openURL(href)
        |> then_(_ => Js.log("opened " ++ href) |> resolve)
        |> ignore
      )
    }
    style=linkStyle
    value
  />;
};