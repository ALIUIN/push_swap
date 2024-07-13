# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

size_t	ft_strlcpy(char *dst, const char *src, size_t s);
size_t	ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *src);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num_elements, size_t element_size);
void	push_swap(int *numb, int size);
int		ft_isdigit(int c);
int		ft_lstsize(t_list *lst);
int		ft_cmp(int *set1, int *stack, int s1, int s2);
int		ft_lstgtmax(t_list *lst);
int		*fill_hashset(int limits[], int size, int *numb, int *hash_set);
int		*ft_lstfill_hashset(t_list *numb, int *hash_set);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstfill(int *stack1, int size);
t_list	*ft_lstrmhead(t_list **a);
t_list	*ft_lstdelback(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	del(void *content);
int		*hash_sort_of_list(t_list *numb);
void	sa(t_list *a);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	*ft_memset(void *s, int c, size_t n);
void	print(void *content);
int		ft_lstgtmin(t_list *lst);

#endif
