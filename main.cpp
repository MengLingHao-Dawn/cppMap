#include "map.h"

int main() {
	Map* map = new Map();
	cout << "��ʼ���ݣ�" << endl;
	map->traversal(); // ����

	map->insert("four", "��"); // ��������
	cout << "��������֮��" << endl;
	map->traversal();

	map->update("four", "��"); // ��������
	cout << "��������֮��" << endl;
	map->traversal();

	delete map;

	system("pause");
	return 0;
}