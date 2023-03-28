import random
import time

def check_sorted(nums):
	for i in range(len(nums)-1):
		if nums[i] > nums[i+1]:
			return False
	return True

nums = random.sample(range(0, 100000), 1000)

sorted = False


counter = 0
start = time.time()
while not sorted:
	
	sorted = check_sorted(nums)
	index = random.randint(0, len(nums)-2)
	if nums[index] > nums[index+1]:
		temp = nums[index]
		nums[index] = nums[index+1]
		nums[index+1] = temp
	
	counter += 1

end = time.time()
print(f"Iteration {counter}: {nums}\nTime to Complete: {end-start}")