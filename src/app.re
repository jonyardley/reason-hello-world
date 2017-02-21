module App = {
  include ReactRe.Component;
  let name = "App";
  type props = {name: string};
  let render {props, updater} =>
    <div> <h1> (ReactRe.stringToElement props.name) </h1> <ItemList /> </div>;
};

include ReactRe.CreateComponent App;

let createElement ::name => wrapProps {name: name};
