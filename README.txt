********************************
*** Hello World Requirements ***
********************************

<> The text "Hello World!" should appear in a bold typeface on the right side of all Hello World Article pages only.
+ This is set as the view block title.
+ Styles in feature module.
+ The requirements did not specify whether this is distinct and separate from the list of node titles. From the screenshot, it appears within a div containing the node titles, so I implemented it as a view block title.

<> A block listing hyperlinked titles to all nodes that are of Hello World Article type, and are tagged with "Enabled" terms from the Sections vocabulary, should appear below the "Hello World!" text on Hello World Article pages.
+ Implemented as view block with appropriate relationship and filters.
+ Did not use published node filters, as I was unsure if all nodes were to be published in this scenario.
+ Nor is the view sorted.
+ Display infinite results.
+ I opted to use context module to place the view block on Hello World Article pages content type.
+ The requirements did not specify to filter out the node being viewed, which could have been accomplished using the NID contextual filter.

<> When viewing a Hello World Article on the Drupal site, the phrase "Content starts here!" should appear in an italic typeface as the first line of content on the page.
+ I accomplished this using the CSS pseudo before element on the div.node element targeting only the hello world type and full nodes.
+ In my opinion, "Contact starts here!" does not add substative content to the page, and merely serves as a visual indicator for the sighted user.
+ Re: accessibility, Drupal's built-in div#skip-link navigation element serves users with disabilities to jump to main content at div#main-content.
+ If I were required to add "Content starts here!" as content, I would favor adding a text field to the content type, default it to "Content starts here!" and dragging into the correct rendering position within the node's content. I tend to favor adding anything a client may want to alter through the UI, so it's more accessible.

<> These features should be portable, contained in a Drupal module file.
+ It's all wrapped up into a Feature module, dependent upon the content_type_vocab_hello_world module.

<> Name the module "hello_world"
+ Check!

<> Compatible with Drupal 7
+ Double check!
