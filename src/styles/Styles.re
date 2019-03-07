open BsReactNative;
let code = ReactDOMRe.Style.make(
    ~fontFamily="monospace",
    ()
);
let styles =
    StyleSheet.create(Style.{
      "app": style([marginHorizontal(Auto), maxWidth(Pt(500.))]),
      "logo": style([height(Pt(80.))]),
      "header": style([padding(Pt(20.))]),
      "title":
        style([
          fontWeight(`Bold),
          fontSize(Float(24.)),
          marginVertical(Pt(16.)),
          textAlign(Center),
        ]),
      "text":
        style([
          lineHeight(24.),
          fontSize(Float(18.)),
          marginVertical(Pt(16.)),
          textAlign(Center),
        ]),
      "link": style([color(String("#1B95E0"))]),
      "code": style([fontFamily("monospace")]),
    }
  );