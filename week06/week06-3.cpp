int removeDuplicates(int* nums, int numsSize){
    //���ѱСG���дN�O�}�C�B�}�C�N�O����
    int k=1;
    for(int i=1; i<numsSize; i++){
        if(nums[i-1] == nums[i]){
            //���n����
        } else{
            nums[k] = nums[i];//��s�Ʀr�h����
            k++;
        }
    }
    return k;
}
