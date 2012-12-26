class Vector(val a: Float, val b: Float, val c: Float) {
  override def toString(): String = "[ " + a + ", " + b + ", " + c + " ]"

  def dot(other: Vector): Float = {
    a * other.a + b * other.b + c * other.c
  }

  def cross(other: Vector) = {
    new Vector(
      b * other.c - c * other.b,
      c * other.a - a * other.c,
      a * other.b - b * other.a
    )
  }
}

object test3 extends App {
  var n: Int = 0
  val loops = (5e8).toInt
  println("looping " + loops + " times")
  for(i <- 1 to loops) {
    val v1 = new Vector(1*i,2*i,3*i)
    val v2 = new Vector(9*i,8*i,7*i)
    val d = v1.dot(v2)
    val c = v1.cross(v2)

    n = n + 1
  }

  println("counter = "+n)
}
