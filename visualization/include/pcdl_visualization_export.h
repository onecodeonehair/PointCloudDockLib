//
// Created by mfy on 2025/12/3.
//

#ifndef POINTCLOUDDOCKLIB_PCDL_VISUALIZATION_EXPORT_H_H
#define POINTCLOUDDOCKLIB_PCDL_VISUALIZATION_EXPORT_H_H
#ifdef _WIN32
    #ifdef PCDL_VISUALIZATION_EXPORTS
        #define PCDL_VISUALIZATION_API __declspec(dllexport)
    #else
        #define PCDL_VISUALIZATION_API __declspec(dllimport)
    #endif
#else
    #define PCDL_VISUALIZATION_API
#endif
#endif //POINTCLOUDDOCKLIB_PCDL_VISUALIZATION_EXPORT_H_H