void MallocPersons(AddressBook* address) {
	//1.ֱ��ʹ��realloc������������
	address->capacity += 20;
	//�Ȱ�����capacity�Ĵ�С�ı䣬ʹ����
	address->persons = (PersonInof*)realloc(address->persons,
		address->capacity * sizeof(PersonInof));
	//֮��ͨ�����Ӻ��������ڴ��������һ��������ڴ�

	//2. ͨ��malloc�ķ�ʽ�ֶ�����һ��������ڴ�
	address->capacity += 20;
	//�Ȱ�����capacity�Ĵ�С�ı䣬ʹ����
	PersonInof* NewPeisons = (PersonInof*)malloc(sizeof(PersonInof)*address->capacity);
	//֮������µ�����capaci��С����һ����������ݿռ�
	memcpy(NewPeisons, address->persons, address->size * sizeof(PersonInof));
	//ͨ�������ķ�ʽ����֮ǰ�ڴ�֮�е����ݿ����������뵽���ڴ�֮��
	free(address->persons);
	///�ͷ�ԭ�е��ڴ�ռ�
	address->persons = NewPeisons;
	//�µ��ڴ濪ʼ��λ��
}