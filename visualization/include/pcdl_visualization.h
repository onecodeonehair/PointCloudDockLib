//
// Created by mfy on 2025/12/2.
//

#ifndef POINTCLOUDDOCKLIB_PCDL_VISUALIZATION_H
#define POINTCLOUDDOCKLIB_PCDL_VISUALIZATION_H
#include <pcl/visualization/pcl_visualizer.h>

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

namespace pcdl
{
    namespace visualization
    {
        template <typename PointT>
         bool showPointCloud(const typename pcl::PointCloud<PointT>::ConstPtr& cloud,
                                    const typename pcl::PointCloud<PointT>::ConstPtr& target_cloud,
                                    const std::string& window_name);
        /*template <typename PointT>
        DLL_API bool showPointCloud<pcl::PointXYZI>(
            const pcl::PointCloud<pcl::PointXYZI>::ConstPtr&,
            const pcl::PointCloud<pcl::PointXYZI>::ConstPtr&,
            const std::string&);*/
        template
        DLL_API bool showPointCloud<pcl::PointXYZI>(
            const pcl::PointCloud<pcl::PointXYZI>::ConstPtr&,
            const pcl::PointCloud<pcl::PointXYZI>::ConstPtr&,
            const std::string&);
    }
}



#endif //POINTCLOUDDOCKLIB_PCDL_VISUALIZATION_H
