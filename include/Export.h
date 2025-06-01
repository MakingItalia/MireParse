#ifndef EXPORT_H
#define EXPORT_H

// Comment dllimport/dllexport definitions to avoid problems with gcc (MinGW) if do not create DLLs.
#define SHADER_API

/*
#ifdef SHADERLIB_EXPORTS
#define SHADER_API __declspec(dllexport)
#else
#define SHADER_API __declspec(dllimport)
#endif
*/

#endif // EXPORT_H
