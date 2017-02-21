module App = {
  include ReactRe.Component;
  let name = "App";
  type props = unit;
  let render {props, updater} =>
    <div>
      <h1> (ReactRe.stringToElement "Hello Reason App!!!") </h1>
      <h2> (ReactRe.stringToElement "This is quite nice....") </h2>
      <p> (ReactRe.stringToElement "Now it's time to learn something cool...") </p>
    </div>;
};

include ReactRe.CreateComponent App;

let createElement = wrapProps ();
