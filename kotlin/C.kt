private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
 
fun main(args: Array<String>) {
    var T = readInt();
   
    
    for(i in 0..T-1){
        var (n, k) = readInts()
        var ans = 1
        var s = readLn()
         val vis = IntArray(n, { i -> 0})
         val gone = IntArray(n, { i -> 0})
         var f = 0
        for(j in 0..n-1){
            if(s[j] == '1'){
                f = 1
             
                vis[j] = 1;
            }
        }
     
        if(f == 0){
          println(0)
          continue
        }
        
      
        var curr = 1
        gone[0] = 1
        while(true){
          var p = k
          var flag = 0
          for(j in 0..n-1){
            if(gone[j] == 0 && vis[j] == 1){
              flag = 1
              break;
            }
          }
          if(flag == 0)break
          
          while (p > 0) {
            for(m in 0..n-1)
                if(gone[(curr + m) % n] == 0){
                    p--;
                    if(p == 0){
                     ans++
                    
                     gone[(curr + m) % n] = 1
                     curr = curr + m
                     break
                    }
                }
          }
           
        }
       println(ans)
 
    }
 
}
