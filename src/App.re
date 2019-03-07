open BsReactNative;
open Utils;
open Styles;
let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: (_self) =>
      <View style=styles##app>
        <View style=styles##header>
          <Image
            accessibilityLabel="React logo"
            source=(`Required(Packager.require("./assets/logoUri.svg")))
            resizeMode=`contain
            style=styles##logo
          />
          <Text style=styles##title> {"React Native for Web"->s} </Text>
        </View>
        <Text style=styles##text>
          "This is an example of an app built with "->s
          <Text> <a href="https://github.com/facebook/create-react-app">
            "Create React App"->s </a>
          </Text>
          " and "->s
          <Text style=styles##link> <a href="https://github.com/necolas/react-native-web">
            "React Native for Web"->s</a>
          </Text>
        </Text>
        <Text style=styles##text>
          "To get started, edit "->s
          <Text style=styles##link> <a style=Styles.code href="https://codesandbox.io/s/q4qymyp2l6/">
            "src/App.js"->s </a>
          </Text>
          ". "->s
        </Text>
        <Button onPress={() => Js.log("Example button pressed")} title="Example button" />
      </View>
};

let default =
ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));