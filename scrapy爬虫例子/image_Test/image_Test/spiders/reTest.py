# -*- coding: utf-8 -*-
import scrapy
from image_Test.items import ImageTestItem

class RetestSpider(scrapy.Spider):
    name = 'reTest'
    allowed_domains = ['hao123.com']
    start_urls = ['https://www.hao123.com/manhua/list/?finish=&audience=&area=%E6%97%A5%E6%9C%AC&cate=&order=']

    def parse(self, response):



            items = response.xpath('//div[@class="list-page clearfix"]//img/@src').extract()
            #names = response.xpath('//div[@class="list-page clearfix"]//div[@class="item-1"]')
            # print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@22")
            # print(items)
            # print("###########################################!1")

            #for i in names:
            #    item['image_urls'].apend(i.xpath('.//img/@src').extract())
                #item['image_name'] = i.xpath('.//a/@title').extract()[0]
                #yield item

            #for i in items:
            item = ImageTestItem()
            item['image_urls'] = items
            yield  item