import { AppRegistry } from "react-native";
import App from "./App.bs";

AppRegistry.registerComponent("App", () => App);

AppRegistry.runApplication("App", {
  rootTag: document.getElementById("root")
});
