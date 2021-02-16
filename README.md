# CPlusPlus---Tree---Heap---Stack

## İçerik (Contents)

----------------------------------------------
### AVL - Heap 
----------------------------------------------



----------------------------------------------
### CiftBagliDairesel-TekYonlu
----------------------------------------------

> TR

Liste her iki yönden de, yani baştan kuyruğa veya kuyruktan başa geçilebilir.
Baştan kuyruğa veya kuyruktan başa atlama sabit O (1) zamanında yapılır.
Dairesel Çift Bağlantılı Listeler, Fibonacci Heap gibi gelişmiş veri yapılarının uygulanması için kullanılır.


Her düğümde önceki işaretçiyi barındırmak için biraz fazladan bellek gerekir.
Bir liste üzerinde işlem uygularken veya yaparken çok sayıda işaretçi yer alır. Bu nedenle, işaretçiler dikkatlice kullanılmalıdır, aksi takdirde listenin verileri kaybolabilir.


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

> TR

Bağlı listelerde bir düğüm kendisinden sonra gelen düğümün adres bilgisini ve kendisinden önceki düğümün adres bilgisini içerebilir. Bu şekilde bir yapıya sahip bağlı listelere çift yönlü bağlı liste (Doubly Linked List) denir. Başka bir ifade ile kendisinden önceki ve sonraki düğümlerin adreslerini saklamak üzere iki adet işaretçisi olan bağlı listelere çift yönlü bağlı liste veya iki yönlü bağlı liste denir.

***********************************************

> EN

In linked lists, a node may contain the address information of the next node and the address information of the preceding node. Linked lists with such a structure are called Doubly Linked Lists. In other words, linked lists with two pointers to store the addresses of the nodes before and after them are called two-way linked lists or two-way linked lists.

----------------------------------------------------
### Kuyruk-Queue
----------------------------------------------------

> TR

Bilginin geliş sırasına göre, ilk önce gelen elemana ilk erişilen liste yapısına kuyruk (queue) denir.
Bu erişimde First-In-First-Out (FIFO) prensibi vardır. Yani ilk giren eleman, ilk çıkar. Örneğin sinema bileti almak için sıraya girmiş kişileri düşünebiliriz. İlk önce gelen kişi bileti daha önce alacaktır.
Queue veri yapısında, verilere iki uçtan erişim vardır. Bir uçtan eleman ekleme (enqueue), diğer uçtan eleman çıkarma (dequeue) işlemleri yapılır.
Queue tasarımı dizi veya bağlı liste ile yapılabilir. Bağlı liste kullanarak boyutu sabit olmayan bir queue oluşturabiliriz. Dizi kullanmak için ise sabit bir boyut belirlemeliyiz.


> EN

According to the order in which the information comes, the list structure that comes first is called the queue.
This access has First-In-First-Out (FIFO) principle. So the first element in, first out. For example, we can think of people queuing up to buy movie tickets. The person who comes first will get the ticket first.
Queue data structure has access to data from two ends. Adding elements from one end (enqueue) and removing elements from the other (dequeue) are done.
Queue design can be done by string or linked list. We can create an unstable queue using a linked list. To use an array, we must specify a fixed size.

----------------------------------------------------
### TekBagliDaireselListe
----------------------------------------------------

> TR

Tek yönlü bağlı liste yapısına ilave bir özellik eklenerek, listenin en son elemanının sonraki (next) işaretçisinin listenin ilk elemanını göstermesi sağlanabilir. Başka bir ifade ile tek yönlü bağlı listenin son elemanında, listenin başındaki elemanı gösterecek bir işaretçi bulundurularak oluşturulan listelere Dairesel Tek Yönlü Bağlı Listeler denir.



> EN

By adding an additional property to the one-way linked list structure, the next (next) pointer of the last element of the list can point to the first element of the list. In other words, lists created by having a pointer to show the element at the beginning of the list in the last element of the one-way linked list are called Circular One-Way Linked Lists.

----------------------------------------------------
