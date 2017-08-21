#ifndef POOL_HPP
#define POOL_HPP

struct stringpool {
	long long left;
	long long right;
	long long off;
};

long long addpool(struct memfile *poolfile, struct memfile *treefile, const char *s, char type);

#endif
