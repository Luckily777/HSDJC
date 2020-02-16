#include <stdio.h>
#include <stdlib.h>

struct st_task
{
	uint16_t id;
	uint32_t value;
	uint64_t timestamp;
};


void main()
{
	st_task task = {};
	uint64_t a = 0x00010001;
	memcpy(&task, &a, sizeof(uint64_t));
	printf("%11u,%11u,%11u", task.id, task.value, task.timestamp);
	system("pause");
}


1 0 1