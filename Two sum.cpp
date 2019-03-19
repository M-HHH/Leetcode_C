/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
    int *a = (int*)malloc(2*sizeof(int));
    for(int i=0; i<numsSize; i++)
    {
        for(int j = i+1; (j<numsSize && j != i); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                a[0] = i;
                a[1] = j;
            };
        };    
    };
    return a;
}



//Problem1 how to use the malloc?
//int *a = (int*)malloc(2*sizeof(int)) 其中malloc函数用于在系统中申请一段连续的指定大小的内存块区域以int*类型返回分配的内存区域地址。
//其中申请的内存大小为2个int型存储单元，并将这个2个连续的整型存储单元的手地址存储到指针变量a中。


//Problem2 What's the difference between "new" and "malloc"?
//new 在C++中是关键字，而malloc 为stdlib.h中的函数。
//new返回指定类型的指针，并可以自动计算所需要的大小。
//int *p;
//p = new int;
//以上返回类型为int * 类型，分配大小为sizeof(int);
//int *p;
//p = new int[100];
//以上返回类型为int * 类型，分配大小为sizeof(int)*100;

//Problem3 C pointer?
