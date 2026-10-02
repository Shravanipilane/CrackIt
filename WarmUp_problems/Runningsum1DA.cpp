# 1480

int n = nums.size();
int sum = 0;
for(int i = 0; i < n; i++) 
{
    sum = sum + nums[i];
    nums[i] = sum;
}
return sum;