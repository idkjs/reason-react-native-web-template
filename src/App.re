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
          <Text> {ReasonReact.string("Hello world!")} </Text>
          <Text style=styles##title>"React Native for Web"->s</Text>
          <Text style=styles##title>{ReasonReact.string("Hello world!")}</Text>
        </View>
        <Text style=styles##text>
          "This is an example of an app built with"->s
          <TextLink href="https://github.com/facebook/create-react-app">
            "Create React App"->s
          </TextLink>
          <Link href="https://github.com/facebook/create-react-app">
            "Create React App"->s
          </Link>
          "and"->s
          <TextLink href="https://github.com/necolas/react-native-web">
            "React Native for Web"->s
          </TextLink>
        </Text>
        <Text style=styles##text>
          "To get started, edit"->s
          <TextLink href="https://codesandbox.io/s/q4qymyp2l6/" style=styles##code>
            "src/App.js"->s
          </TextLink>
        </Text>
        // <Button onPress={() => Js.log("Example button pressed")} title="Example button" />
      </View>
};

let default =
ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));