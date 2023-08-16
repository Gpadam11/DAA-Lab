  if (secondSmallest < smallest) 
    {
        int temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }

    if (secondLargest > largest) 
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }