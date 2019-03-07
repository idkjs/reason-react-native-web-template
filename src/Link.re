open BsReactNative;

let component = ReasonReact.statelessComponent("Link");

let make = (~href:string, _children) => {
  ...component,
  render: (_self) => <Text
    value=href
    accessible=true
    style=Styles.styles##link
  />
};