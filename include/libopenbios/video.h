
unsigned long get_color(int col_ind);
void set_color(int ind, unsigned long color);
void video_mask_blit(void);

typedef struct osi_fb_info {
    unsigned long mphys;
    unsigned long mvirt;
    int rb, w, h, depth;
} osi_fb_info_t;

extern struct video_info {
    int has_video;
    osi_fb_info_t fb;
    unsigned long *pal;    /* 256 elements */
} video;
