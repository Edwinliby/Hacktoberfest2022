
#include <stdio.h>
#include <stdlib.h>

struct node 
{
	struct node* sup; 
	struct node* rightc;
	struct node* leftc;
	int value; 
	int colour; 
	
};


struct node* roote = NULL;

void inorder(struct node* move)
{
	if (move == NULL)
	{
		return;
	}
	inorder(move->leftc);

	printf("                                  VALUE-%02d and ", move->value);
	if(move->colour==1)
	{
		printf("COLOUR-RED\n");
	}
	if(move->colour==0)
	{
		printf("COLOUR-BLACK\n");
	}

	inorder(move->rightc);
}

void preorder(struct node* move)
{
	if (move == NULL)
	{
		return;
	}
      
	printf("                                  VALUE-%02d and ", move->value);
	if(move->colour==1)
	{
		printf("COLOUR-RED\n");
	}
	if(move->colour==0)
	{
		printf("COLOUR-BLACK\n");
	}

	preorder(move->leftc);

	

	preorder(move->rightc);
}

void postorder(struct node* move)
{
	if (move == NULL)
	{
		return;
	}
	postorder(move->leftc);

	postorder(move->rightc);

	printf("                                  VALUE-%02d and ", move->value);
	if(move->colour==1)
	{
		printf("COLOUR-RED\n");
	}
	if(move->colour==0)
	{
		printf("COLOUR-BLACK\n");
	}
}



struct node* redbt(struct node* move,struct node* nno)
{
	if (move == NULL)
	{
		return nno;
	}

    if (nno->value < move->value)
	{
		move->leftc = redbt(move->leftc, nno);
		move->leftc->sup = move;
	}

	else if (nno->value > move->value)
	{
		move->rightc = redbt(move->rightc, nno);
		move->rightc->sup = move;
	}

	return move;
}

void rightroe(struct node* temp)
{
	struct node* left = temp->leftc;
    temp->leftc = left->rightc;

	if (temp->leftc)
	{
		temp->leftc->sup = temp;
	}

	left->sup = temp->sup;

	if (!temp->sup)
	{
		roote = left;
	}

	else if (temp == temp->sup->leftc)
	{
		temp->sup->leftc = left;
	}

	else
	{
		temp->sup->rightc = left;
	}

	left->rightc = temp;
	temp->sup = left;
}

void leftroe(struct node* temp)
{
	struct node* right = temp->rightc;
	temp->rightc = right->leftc;

	if (temp->rightc)
	{
		temp->rightc->sup = temp;
	}

	right->sup = temp->sup;

	if (!temp->sup)
	{
		roote = right;
	}
	else if (temp == temp->sup->leftc)
	{
		temp->sup->leftc = right;
	}
	else
	{
		temp->sup->rightc = right;
	}

	right->leftc = temp;
	temp->sup = right;
}

void trick(struct node* root, struct node* link)
{
	struct node* ppt = NULL;
	struct node* gpp = NULL;

	while ((link != root) && (link->colour != 0)&& (link->sup->colour == 1))
	{
		ppt = link->sup;
		gpp = link->sup->sup;

		if (ppt == gpp->leftc)
		{

			struct node* ut = gpp->rightc;

			if (ut != NULL && ut->colour == 1)
			{
				gpp->colour = 1;
				ppt->colour = 0;
				ut->colour = 0;
				link = gpp;
			}

			else
			{


				if (link == ppt->rightc) 
				{
					leftroe(ppt);
					link = ppt;
					ppt = link->sup;
				}

				
				rightroe(gpp);
				int t = ppt->colour;
				ppt->colour = gpp->colour;
				gpp->colour = t;
				link = ppt;
			}
		}

	
		else 
		{
			struct node* utt = gpp->leftc;

		
			if ((utt != NULL) && (utt->colour == 1))
			{
				gpp->colour = 1;
				ppt->colour = 0;
				utt->colour = 0;
				link =gpp;
			}
			else 
			{
			
				if (link == ppt->leftc) 
				{
					rightroe(ppt);
					link = ppt;
					ppt = link->sup;
				}

			
				leftroe(gpp);
				int t = ppt->colour;
				ppt->colour = gpp->colour;
				gpp->colour = t;
				link = ppt;
			}
		}
	}

	root->colour = 0;
}




int main()
{
	int n = 6;
	int a[6] = { 41,38,31,12,19,8};

	for (int i = 0; i < n; i++) {

	
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		temp->rightc = NULL;
		temp->leftc = NULL;
		temp->sup = NULL;
		temp->value = a[i];
		temp->colour = 1;

	
		roote = redbt(roote, temp);

	
		trick(roote, temp);
	}

    printf("                                preorder Traversal of Created Tree\n");
	
    preorder(roote);
	printf("\n\n");
	printf("                                Inorder Traversal of Created Tree\n");
	inorder(roote);
	printf("\n\n");
	printf("                                postorder Traversal of Created Tree\n");
    postorder(roote);

	return 0;
}
