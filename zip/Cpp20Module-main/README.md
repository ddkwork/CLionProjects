# Cpp20Module
Standard C++ 20 template, which utilises C++20 modules, for Visual Studio 2022 (v 17.4)  
The project is set for x64 only.  
x86 projects don't index very well when included in the template. It is quite possible to create a template for x86, just use the same files as in this project but set the project for x86.

These files, if they are not zipped up, need zipping up and placing in the:

* **C:\Users\[username]\[OneDrive]\Documents\Visual Studio 2022\Templates\Project Templates\Visual C++ Project**  

folder or wherever you place your custom templates.

It includes, within each created project an:    

**application entry function,**   
- ***[safeprojectname].cpp***  

**a standard header module; this is like a precompiled header file. [like being operative word]**  
- ***Headers\\[safeprojectname]_Headers.ixx***  

**a module you can use to ensure first linking and compilation.**  
- ***Hello\Hello.ixx***   


### Note: 
I will endeavour to keep this project template up to date, but don't promise anything remotely like a speedy or reliable service...   

Use this at your own risk!   
I make absolutely no guarantee of usability, correctness or even if it will work...
