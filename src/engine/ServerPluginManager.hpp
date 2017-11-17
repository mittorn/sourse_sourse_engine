#pragma once

class CServerPluginManager final
{
public:
	CServerPluginManager() = default;
	~CServerPluginManager() = default;
	
	bool Load(const char *path);
	void UnloadAll();
private:
};