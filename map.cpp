#include "map.h"

Map::Map() {
	data.insert(pair<string, string>("one", "һ"));
	data.insert(pair<string, string>("two", "��"));
	data.insert(pair<string, string>("three", "��"));
}

Map::~Map() {
	// ���map
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