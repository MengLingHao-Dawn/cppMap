#include "map.h"

Map::Map() {
	data.insert(pair<string, string>("one", "一"));
	data.insert(pair<string, string>("two", "二"));
	data.insert(pair<string, string>("three", "三"));
}

Map::~Map() {
	// 清空map
	data.clear();
}

void Map::insert(string key, string value) {
	data.insert(pair<string, string>(key, value));
}

void Map::traversal() {
	map<string, string>::iterator iter;
	for (iter = data.begin(); iter != data.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}
}

void Map::update(string key, string value) {
	data[key] = value;
}