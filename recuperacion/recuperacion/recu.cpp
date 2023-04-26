void LineMidPoint ( int x0, int y0, int x1, int y1)

{


	int x, y, dx, dy, xend, p, incE, incNE;
	dx = x1 - x0;
	dy = y1 - y0;
	p = 2 * dy - dx;
	incE = 2 * dy;
	incNE = 2 * (dy - dx);
	/* determinar que punto usar para empezar, cual para terminar */
	if (x0 > x1) {
		x = x1;
		y = y1;
		xend = x0;
	}
	else {
		x = x0;
		y = y0;
		xend = x1;
	}
	/* se cicla hasta llegar al extremo de la línea */
	while (x <= xend)
	{
		XDrawPoint(display, win, gc, x, y);
		int x = x + 1;
		if (p <= 0)
			p = p + incE;
		else {
			y = y + 1;
			p = p + incNE;
		}
	}
}
