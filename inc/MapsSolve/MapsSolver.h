
#ifndef _MAPSSOLVER_H_
#define _MAPSSOLVER_H_

namespace MapsSolver
{
	class PGMMapProcesser
	{
	public:
		int width;		// 宽
		int height;		// 高
		int maxGray;	// 最大灰度值
		int mapType;	// 地图类型
		unsigned char* mapData; //地图数据指针

	};
}






#endif