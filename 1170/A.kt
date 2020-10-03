fun main() {
    val t = readLine()!!.toInt()
    
    repeat(t)
    {
    	val (x, y) = readLine()!!.split(" ").map { it.toLong() }
    	
    	val n= minOf(x-1, y-1)
    	val m = x-n
    	val k = y-n
    	
        println("$m $n $k")
    }
}