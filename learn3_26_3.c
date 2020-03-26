void MallocPersons(AddressBook* address) {
	//1.直接使用realloc进行续接扩容
	address->capacity += 20;
	//先把容量capacity的大小改变，使其变大
	address->persons = (PersonInof*)realloc(address->persons,
		address->capacity * sizeof(PersonInof));
	//之后通过续接函数将其内存后再续接一个更大的内存

	//2. 通过malloc的方式手动申请一个更大的内存
	address->capacity += 20;
	//先把容量capacity的大小改变，使其变大
	PersonInof* NewPeisons = (PersonInof*)malloc(sizeof(PersonInof)*address->capacity);
	//之后根据新的容量capaci大小申请一个更大的内容空间
	memcpy(NewPeisons, address->persons, address->size * sizeof(PersonInof));
	//通过拷贝的方式，将之前内存之中的内容拷贝到新申请到的内存之中
	free(address->persons);
	///释放原有的内存空间
	address->persons = NewPeisons;
	//新的内存开始上位了
}