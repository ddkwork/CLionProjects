# hello-header-translate

C++20 header include translation example.

Examples of builds with various levels of include translation:

```
b config.cxx.translate_include=all-importable
b config.cxx.translate_include=std-importable
b config.cxx.translate_include='all-importable std-importable@false'
b config.cxx.translate_include='all-importable <iostream>@false'
b config.cxx.translate_include='<string_view> <iostream>'
```
