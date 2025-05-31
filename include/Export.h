#ifndef EXPORT_H
#define EXPORT_H

// Commenta le definizioni dllimport/dllexport per evitare problemi con gcc (MinGW) se non crei DLL.
#define SHADER_API

/*
#ifdef SHADERLIB_EXPORTS
#define SHADER_API __declspec(dllexport)
#else
#define SHADER_API __declspec(dllimport)
#endif
*/

#endif // EXPORT_H
