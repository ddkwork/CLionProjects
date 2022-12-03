module;
// standard includes in this section
// #include <algorithm>

export module $safeprojectname$_Headers;

// Export import standard headers in this section.
// The applicable headers still need including in the relevant modules
// but placing them here ensures a smoother and less troublesome
// compilation and linking.
// This module should be the first module created, with at least 
// an export import <iostream>; 
// NOTE:
// Include this module, as the first import, in all the modules within  
// a project

export import <iostream>;
export import <string>;
export import <memory>;

export import <cerrno>;
export import <exception>;
