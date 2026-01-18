int bouncingBall(double h, double bounce, double window) {
  int count = -1;
  if (h <= 0 || h <= window || bounce <= 0 || bounce >= 1)
    return -1;
  while (h > window && (count += 2))
    h = h * bounce;

  return count;
}
