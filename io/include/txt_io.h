//
// Created by mfy on 2025/12/2.
//

#ifndef POINTCLOUDDOCKLIB_TXT_IO_H
#define POINTCLOUDDOCKLIB_TXT_IO_H
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

// 设置导出
#ifdef _WIN32  // 仅在 MSVC 编译器下生效（Windows）
    #ifdef DLL_EXPORTS  // 定义此宏表示当前是 DLL 导出端
        #define DLL_API __declspec(dllexport)
    #else  // 调用端（导入）
        #define DLL_API __declspec(dllimport)
    #endif
#else  // 非 MSVC 编译器（如 MinGW），空宏兼容
    #define DLL_API
#endif

namespace pcdl {
    namespace io {

         DLL_API   bool readTXTToPCLXYZI(const std::string& file_path, const typename pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud);
;
    } // io
} // pcdl

#endif //POINTCLOUDDOCKLIB_TXT_IO_H