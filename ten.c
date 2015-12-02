int main() {
  /* Setup */
  char* mem = (char*)malloc(30000*sizeof(char));
  char* p = mem;

  *p += 48; // 0
  ++p;
  *p += 10;
  while(*p) {
    --p;
    putchar(*p);
    ++*p;
    ++p;
    --*p;
  }

  return 1;
}
