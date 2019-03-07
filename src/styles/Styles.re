open BsReactNative;
let styles =
  Style.(
    StyleSheet.create({
      "container":
        style([flex(1.), justifyContent(Center), alignItems(Center)]),
      "app": style([marginHorizontal(Auto), maxWidth(Pt(500.))]),
      "logo": style([height(Pt(80.))]),
      "header": style([padding(Pt(20.))]),
      "title":
        style([
          fontWeight(`Bold),
          fontSize(Float(1.5)),
          marginVertical(Pt(1.)),
          textAlign(Center),
        ]),
      "text":
        style([
          lineHeight(1.5),
          fontSize(Float(1.125)),
          marginVertical(Pt(1.)),
          textAlign(Center),
        ]),
      "link": style([color(String("#1B95E0"))]),
      "code": style([fontFamily("monospace")]),
    })
  );