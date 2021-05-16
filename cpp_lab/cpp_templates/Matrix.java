public class Matrix{
  private int INITIAL_CAPACITY = 20;
  public static Album array[];
  private int size;
  private int capacity;

  public Matrix(){

    array = new Album[INITIAL_CAPACITY];
    size = 0;
    capacity = 20;
  }

  public void PushBack(Album tmp){
    // check if last element at boundery
    if (size == capacity){
      ReAlloc();
    }
    // add new element to index 'size'
    array[size] = tmp;
    size++;
  }

  public int GetSize(){return size;}

  public void ReAlloc(){
    // allocate new block
    Album tmp[] = null;
    // copy elements
    tmp = new Album[capacity * 2];
    for (int i = 0; i < capacity; i++){
      tmp[i] = array[i];
    }
    // change pointer
    array = tmp;
  }

  public void PopBack(int index){
    if (size < 1){
      System.out.println("[ERROR] Empty array");
    } else {
      DelEl(index);
    }
  }

  public void DelEl(int index){
    // delete element at index a:nd shift rest 1 position to the left
    for (int i = index; i < size - 1; i++){
      array[i] = array[i + 1];
    }
    array[size - 1] = null;
    size--;
  }
}
