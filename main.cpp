#include "map.h"

int main() {
	Map* map = new Map();
	cout << "初始数据：" << endl;
	map->traversal(); // 遍历

	map->insert("four", "四"); // 插入数据
	cout << "插入数据之后：" << endl;
	map->traversal();

	map->update("four", "五"); // 更新数据
	cout << "更新数据之后：" << endl;
	map->traversal();

	delete map;

	system("pause");
	return 0;
}