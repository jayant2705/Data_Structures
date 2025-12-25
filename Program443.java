class node
{
    public int data;
    public node next;

    //important
    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
}
class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("Object Of SinglyLL Gets Created :");
        this.first = null;
        this.iCount = 0;
    }
    public void InsertFirst(int no)
    {
        node newn = null;

        //Change The Code
        newn = new node(no);

        newn.next = this.first;
        this.first = newn;

        this.iCount++;
    }
    public void InsertLast(int no)
    {
         node newn = null;

        //Change The Code
        newn = new node(no);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {

        }

        this.iCount++;
    }

    public void InserAtPos(int no, int pos)
    {
        
    }

    public void DeletetFirst()
    {
        
    }

    public void DeleteLast()
    {
        
    }

    public void DeleteAtPos(int pos)
    {
        
    }

    public void Display()
    {
        node temp = null;

        temp = this.first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }
}
public class Program443
{
    public static void main(String A[])
    {
        SinglyLL obj =null; 
        int iRet = 0;

        obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11); 
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of Nodes Are :"+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121); 
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of Nodes Are :"+iRet);

        //important for memory deallocate
        obj = null;
        System.gc();


        
    }
}
