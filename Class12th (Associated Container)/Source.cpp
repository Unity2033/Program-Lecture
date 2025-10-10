#include "../Program/stdafx.h"		 
#include <set>		
#include <map>
#include <unordered_set>
#include <unordered_map>


struct Quest
{
	char grade;
	bool complete;
	std::string description;
};

int main()
{
#pragma region 연관 컨테이너 
	// 특정한 방식으로 데이터 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	//	std::unordered_set<const char*> unordered_set;
	//	
	//	unordered_set.reserve(16);
	//	
	//	unordered_set.max_load_factor(2.0);
	//	
	//	unordered_set.insert("Doran’s Ring");
	//	unordered_set.insert("Doran’s Blade");
	//	unordered_set.insert("Doran’s Shield");
	//	
	//	unordered_set.insert("Frozen Heart");
	//	unordered_set.insert("Sterak’s Gage");
	//	unordered_set.insert("Randuin’s Omen");
	//	
	//	unordered_set.insert("Knight’s Vow");
	//	unordered_set.insert("Essence Reaver");
	//	unordered_set.insert("Liandry’s Torment");
	//	
	//	unordered_set.insert("Liandry’s Torment");
	//	
	//	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	//	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
	//	
	//	if (unordered_set.find("Doran’s Shield") != unordered_set.end())
	//	{
	//		cout << "the data exists..." << endl;
	//	}
	//	else
	//	{
	//		cout << "the data does not exits..." << endl;
	//	}
	//	
	//	unordered_set.erase("Knight’s Vow");
	//	
	//	for (const char* element : unordered_set)
	//	{
	//		cout << element << endl;
	//	}

#pragma endregion

#pragma region unordered_map

	//	unordered_map<std::string, int>	unordered_map;
	//	
	//	unordered_map["Potion"] = 2;
	//	unordered_map["Elixir"] = 1;
	//	unordered_map["Antidote"] = 2;
	//	unordered_map["Oil"] = 3;
	//	
	//	string item_name;
	//	
	//	std::cin >> item_name;
	//	
	//	if (unordered_map[item_name] > 0 && unordered_map.find(item_name) != unordered_map.end())
	//	{
	//		unordered_map[item_name]--;
	//	
	//		cout << item_name << " use " << endl;
	//	
	//		if (unordered_map[item_name] <= 0)
	//		{
	//			unordered_map.erase(item_name);
	//	
	//			cout << item_name << " All items acquired." << endl;
	//		}
	//	}
	//	else
	//	{
	//		cout << "Doesn't exist." << endl;
	//	}
	//	
	//	for (const auto & element : unordered_map)
	//	{
	//		cout << "Name : " << element.first << " Quantity : " << element.second << endl;
	//	}

#pragma endregion

#pragma region set

	// std::set<const char*> set;
	// 
	// set.insert("League of Legend");
	// set.insert("Fortnite");
	// set.insert("Mincraft");
	// set.insert("Valorant");
	// 
	// for (const auto& element : set)
	// {
	// 	cout << element << endl;
	// }
	// 
	// cout << "set empty : " << set.empty() << endl;
	// 
	// set.clear();
	// 
	// cout << "set size : " << set.size() << endl;
	// cout << "set max size : " << set.max_size() << endl;

#pragma endregion

#pragma region map

	//	std::map<std::string, Quest> map;
	//	
	//	map["The Lost Heirloom"] =
	//	{
	//		'D',
	//		false,
	//		"Find the missing family heirloom lost in the ruins east of the village. Beware of bandits who may have taken it."
	//	};
	//	
	//	map["Goblin Menace"] =
	//	{
	//		'D',
	//		false,
	//		"Eliminate 10 goblins threatening the trade route. Report back to the guard captain when the task is done."
	//	};
	//	
	//	map["Herbal Remedy"] =
	//	{
	//		'C',
	//		false,
	//		"Gather 5 healing herbs from the Whispering Forest. The village healer needs them to treat the sick."
	//	};
	//	
	//	map["The Lost Heirloom"].complete = true;
	//	
	//	for (const auto & element : map)
	//	{
	//		cout << "Title : " << element.first << endl;
	//		cout << "Grade : " << element.second.grade << endl;
	//		cout << "Complete : " << element.second.complete << endl;	
	//		cout << "Description : " << element.second.description << endl;
	//	
	//		cout << endl;
	//	}

#pragma endregion

#pragma endregion

	return 0;
}
