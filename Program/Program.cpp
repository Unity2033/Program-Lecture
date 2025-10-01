#include "stdafx.h"
#include <unordered_set>

int main()
{
#pragma region 연관 컨테이너 
	// 특정한 방식으로 데이터 저장하고 검색하는 컨테이너입니다.

	std::unordered_set<const char*> unordered_set;

	unordered_set.reserve(16);

	unordered_set.max_load_factor(2.0);

	unordered_set.insert("Doran’s Ring");
	unordered_set.insert("Doran’s Blade");
	unordered_set.insert("Doran’s Shield");

	unordered_set.insert("Frozen Heart");
	unordered_set.insert("Sterak’s Gage");
	unordered_set.insert("Randuin’s Omen");

	unordered_set.insert("Knight’s Vow");
	unordered_set.insert("Essence Reaver");
	unordered_set.insert("Liandry’s Torment");

	unordered_set.insert("Liandry’s Torment");
										
	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;

#pragma endregion


	return 0;
}
