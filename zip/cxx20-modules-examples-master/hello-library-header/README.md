# C++20 Header Importation/Translation Library Example

C++20 header importation/translation library example. Note that
`libhello-format-header` is a header-only (or *binless*, in `build2`
terminology) library.

Example of a development build:

```
b create: config-gcc/, cc config.cxx=g++
cd config-gcc/

b configure: ../libhello-format-header/@libhello-format-header/
b configure: ../libhello-header/@libhello-header/

b configure: ../hello-library-header-import/@hello-library-header-import/
b hello-library-header-import/

b configure: config.cxx.translate_include=all-importable \
  ../hello-library-header-translate/@hello-library-header-translate/
b hello-library-header-translate/
```

We could also enable the include translation for the entire configuration:

```
b create: config-gcc/, cc config.cxx=g++ config.cxx.translate_include=all-importable
```

Example of an installed build:

```
b                                       config.install.root=/tmp/install install: libhello-format-header/
b config.cc.loptions=-L/tmp/install/lib config.install.root=/tmp/install install: libhello-header/
b config.cc.loptions=-L/tmp/install/lib hello-library-header-import/
b config.cc.loptions=-L/tmp/install/lib config.cxx.translate_include=all-importable hello-library-header-translate/
```
