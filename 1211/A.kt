import java.util.*
    fun main() {
        val sc = Scanner(System.`in`)
        val n = sc.nextInt()
        var l = -1
        var li =-1
        var s = -1
        var si =-1
        var t = -1
        var ti =-1
        var a = Array(n) { 0 }
        for (i in 0 until n) {
            a[i] = sc.nextInt()
        }
        
        
        for (i in 0 until n) {
            if (a[i] > l)
            {
              t  = s
              ti =si
              s  = l
              si = li
              l  = a[i]
              li =i
            }
            else if (a[i] > s && a[i]!=l)
            {
              t  = s
              ti =si
             
              s  = a[i]
              si =i
            }
            else if (a[i] > t && a[i]!=l && a[i]!=s)
            {
             
             
              t  = a[i]
              ti =i
            }
            
        }
        if(ti==-1 || si==-1 || li==-1)
        println("-1 -1 -1")
        else
        {ti = ti+1
        si =si+1
        li = li+1
        println("$ti $si $li")
        }
}