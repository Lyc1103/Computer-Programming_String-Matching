# Computer-Programming_String-Matching

---

# Discription

<body>
    <p> Now a professor develops a new string matching rule, so_called <bold>Hello Regex and Glob</bold>(HRG).
    Certainly, you know C standard string library supports some matching functions, like strcmp, strtok, etc.
    However, sometimes we want a string matching function to use <bold>patterns</bold> instead of exact words.
    Then HRG combines the advantaged of regex and glob symbol.
    <br>
    In HRG, you must learn three symbols:
        <li><b><font color= "blue">?</font></b> : Matches any <bold>single</bold> character.</li>
        <li><b><font color= "blue">+</font></b> : Matches any <bold>non-empty sequence</bold> of characters.</li>
        <li><b><font color= "blue">*</font></b> : Matches any <bold>sequence</bold> of characters.</li>
    <br>
    For example, given a pattern <b><font color = "red">app?e</font></b> :
    <li><b>apcs</b> doesn't match the pattern.</li>
    <li><b>appleen</b> doesn't match the pattern.</li>
    <li><b>apple</b> match the pattern.</li>
    <li><b>appe</b> does <b><font color = 'red'>not</font></b> match the pattern.</li>
    For example, given a pattern <b><font color = "red">app*e</font></b> :
    <li><b>apcs</b> does match the pattern.</li>
    <li><b>appleen</b> does match the pattern.</li>
    <li><b>apple</b> match the pattern.</li>
    <li><b>appe</b> does <b><font color = 'red'>match</font></b> the pattern.</li>
    <br>
    Finally, use <font color = "blue"><b>+</b></font> instead of <font color = "blue"><b>*</b></font> in app*e ( that is <font color = "red"><b>app+e</b></font> ), which would pass all examples except the last ( <font color = "red"><b>appe</b></font>).<br>
    <br>
    Now given an input string in the first line, and an integer t < 15 in the second line, which represents how many patterns strings following. You xhould print the pattern string that matches in separate lines sequentially.<br>
    <br>
    Note that is possible for an input string to :<br>
    1. match non of the pattern.<br>
    2. mathc more than 1 pattern.<br>
    3. contain more than 1 different symbol. For example, <b><font color = 'red'>app*+</font></b>, or <b><font color = 'red'>a*p?kk+</font></b>, <b><font color = 'red'>a***p??kk+?*</font></b>.
    </p>
</body>
