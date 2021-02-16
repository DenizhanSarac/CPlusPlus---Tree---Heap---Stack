# CPlusPlus---Tree---Heap---Stack

## İçerik (Contents)

### AVL - Heap 
----------------------------------------------
> TR
Bir yığının en büyük avantajı, maksimum veya minimum yönelimli yığın yoluyla sabit zamanda maksimum veya minimum öğeyi elde edebilmektir.
O (n) 'deki arama süresi bir AVL ağacından daha kötü olacaktır, sadece her bir düğümün çocuklarından daha büyük veya daha küçük olduğunu bilirsiniz, bu yüzden AVL ağacındaki gibi sola veya sağa giderek sorunu azaltamazsınız.

**********************************************
> EN
The big advantage of a heap is to be able to get the max or the min element in constant time through max-oriented or min-oriented heap.
The lookup time in O(n) will be worse than an AVL tree, you just know that each node is bigger or smaller than its children so you cannot reduce the problem by going left or right like in an AVL tree.

----------------------------------------------
### CiftBagliDairesel-TekYonlu
----------------------------------------------

> TR
* Avantajlar:

Liste her iki yönden de, yani baştan kuyruğa veya kuyruktan başa geçilebilir.
Baştan kuyruğa veya kuyruktan başa atlama sabit O (1) zamanında yapılır.
Dairesel Çift Bağlantılı Listeler, Fibonacci Heap gibi gelişmiş veri yapılarının uygulanması için kullanılır.

* Dezavantajları:

Her düğümde önceki işaretçiyi barındırmak için biraz fazladan bellek gerekir.
Bir liste üzerinde işlem uygularken veya yaparken çok sayıda işaretçi yer alır. Bu nedenle, işaretçiler dikkatlice kullanılmalıdır, aksi takdirde listenin verileri kaybolabilir.

**************************************************

> EN

* Advantages: 

List can be traversed from both the directions i.e. from head to tail or from tail to head.
Jumping from head to tail or from tail to head is done in constant time O(1).
Circular Doubly Linked Lists are used for implementation of advanced data structures like Fibonacci Heap.
* Disadvantages 

It takes slightly extra memory in each node to accommodate previous pointer.
Lots of pointers involved while implementing or doing operations on a list. So, pointers should be handled carefully otherwise data of the list may get lost.

----------------------------------------------
### CiftBagliDogrusalListe
----------------------------------------------


