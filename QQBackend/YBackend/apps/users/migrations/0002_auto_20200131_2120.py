# Generated by Django 3.0.2 on 2020-01-31 13:20

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('users', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='qqusers',
            name='password',
            field=models.CharField(help_text='密码', max_length=12, verbose_name='密码'),
        ),
    ]
