#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
template <class T>
class Bag
{
private:
   int capacity;
   int size;
   int currentAddIndex;
   T* data;
   

public:
   Bag(); // Default constructor
   ~Bag(); // Destructor to free any memory
				
   // Getters
   int getCapacity() const {return capacity;}
   int getCount() const {return size;}

   T getItem(int index);
   void addItem(T item);
};

template <class T>
Bag<T>::Bag()
{
   data = new T[5];
   capacity = 5;
   size = 0;
   currentAddIndex = 0;
}

template<class T>
Bag<T>::~Bag()
{
   if (data != NULL)
   {
      delete[] data;
      data = NULL;
   }
}

template<class T>
T Bag<T>::getItem(int index)
{
   if (index < 0 || index > (size - 1))
   {
      return 0;
   }

   return data[index];
}

template <class T>
void Bag<T>::addItem(T item)
{
      if (size == capacity)
      {
         //Bag is full
         
         //allocating new memory
         capacity *= 2;
         T* tempArray = new T[capacity];
         
         //c   opying data
         for (int i = 0; i < size; i++)
         {
            tempArray[i] = data[i];
         }
         //freeing old memory
         delete [] data;
            
         //resetting data to point to new array
         data = tempArray;
      }
      
      // Insert item into the array and increment size
      data[currentAddIndex] = item;
      currentAddIndex ++;
      size ++;
      
}

#endif

