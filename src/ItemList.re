module ItemList = {
  include ReactRe.Component;
  let name = "ItemList";
  type props = unit;
  let items: list string = ["1", "2", "3"];
  let listItems () :list ReactRe.reactElement =>
    items |> List.map (fun item => <li> (ReactRe.stringToElement item) </li>);
  let render {props, updater} => {
    let items = listItems ();
    <ul> (ReactRe.arrayToElement (Array.of_list items)) </ul>
  };
};

include ReactRe.CreateComponent ItemList;

let createElement = wrapProps ();
